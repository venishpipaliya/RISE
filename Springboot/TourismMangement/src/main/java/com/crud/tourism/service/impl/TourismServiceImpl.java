package com.crud.tourism.service.impl;

import java.util.ArrayList;
import java.util.List;
import java.util.Optional;
import java.util.stream.Collectors;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import com.crud.tourism.dto.TouristResponseDTO;
import com.crud.tourism.entity.Tourism;
import com.crud.tourism.repository.TourismRepository;
import com.crud.tourism.service.TouristServices;

@Service
public class TourismServiceImpl implements TouristServices {

	@Autowired
	TourismRepository tourismRepository;

	@Override
	public TouristResponseDTO findById(Long id) {
		Optional<Tourism> tourism = tourismRepository.findById(id);
		return maptoDto(tourism.get());
	}

	@Override
	public TouristResponseDTO saveTrip(Tourism tourism) {
		Tourism savedTrip = tourismRepository.save(tourism);
		return maptoDto(savedTrip);
	}

	@Override
	public TouristResponseDTO updateById(Long id, Tourism tourism) {

		Tourism existing = tourismRepository.findById(id).orElseThrow(() -> new RuntimeException("Tourist not found"));

		// update fields
		existing.setName(tourism.getName());
		existing.setTid(tourism.getTid());
		existing.setDate(tourism.getDate());

		Tourism updated = tourismRepository.save(existing);

		return maptoDto(updated);
	}

	@Override
	public void deleteTrip(Tourism tourism) {
		tourismRepository.deleteById(tourism.getId());

	}

	@Override
	public List<TouristResponseDTO> getAllTrips() {

		List<Tourism> tourisms = tourismRepository.findAll();
		List<TouristResponseDTO> tripList = new ArrayList<>();
		for (Tourism tourism : tourisms) {
			tripList.add(maptoDto(tourism));
		}
		return tripList;

	}

	@Override
	public List<TouristResponseDTO> getAllTripsByDate(String date) {
		return tourismRepository.findAll().stream().filter(t -> t.getDate().equals(date)).map(this::maptoDto)
				.collect(Collectors.toList());

	}

	private TouristResponseDTO maptoDto(Tourism tourism) {
		TouristResponseDTO dto = new TouristResponseDTO();
		dto.setId(tourism.getId());
		dto.setName(tourism.getName());
		dto.setDate(tourism.getTid());
		return dto;
	}

}
