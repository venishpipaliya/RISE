package com.crud.tourism.controller;

import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.DeleteMapping;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.PutMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import com.crud.tourism.dto.TouristResponseDTO;
import com.crud.tourism.entity.Tourism;
import com.crud.tourism.service.TouristServices;

@RestController
@RequestMapping("/rest/tourist")
public class TouristController {

	@Autowired
	private TouristServices touristServices;

	@GetMapping("/{id}")
	public ResponseEntity<TouristResponseDTO> getById(@PathVariable Long id) {
		try {
			return ResponseEntity.ok(touristServices.findById(id));
		} catch (Exception e) {
			return ResponseEntity.status(HttpStatus.NOT_FOUND).build();
		}
	}

	@GetMapping
	public ResponseEntity<List<TouristResponseDTO>> getAll() {
		try {
			return ResponseEntity.ok(touristServices.getAllTrips());
		} catch (Exception e) {
			return ResponseEntity.status(HttpStatus.INTERNAL_SERVER_ERROR).build();
		}
	}

	@PostMapping
	public ResponseEntity<TouristResponseDTO> save(@RequestBody Tourism tourism) {
		try {
			return ResponseEntity.status(HttpStatus.CREATED).body(touristServices.saveTrip(tourism));
		} catch (Exception e) {
			return ResponseEntity.status(HttpStatus.BAD_REQUEST).build();
		}
	}

	@PutMapping("/{id}")
	public ResponseEntity<TouristResponseDTO> updateById(@PathVariable Long id, @RequestBody Tourism tourism) {

		try {
			return ResponseEntity.ok(touristServices.updateById(id, tourism));
		} catch (Exception e) {
			return ResponseEntity.status(HttpStatus.NOT_FOUND).build();
		}
	}

	@DeleteMapping("/{id}")
	public ResponseEntity<Void> delete(@PathVariable Long id) {
		try {
			Tourism t = new Tourism();
			t.setId(id);
			touristServices.deleteTrip(t);
			return ResponseEntity.noContent().build(); // 204
		} catch (Exception e) {
			return ResponseEntity.status(HttpStatus.NOT_FOUND).build();
		}
	}

	@GetMapping("/date/{date}")
	public ResponseEntity<List<TouristResponseDTO>> getByDate(@PathVariable String date) {
		try {
			return ResponseEntity.ok(touristServices.getAllTripsByDate(date));
		} catch (Exception e) {
			return ResponseEntity.status(HttpStatus.INTERNAL_SERVER_ERROR).build();
		}
	}
}