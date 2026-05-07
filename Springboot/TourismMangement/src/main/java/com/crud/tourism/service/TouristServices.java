package com.crud.tourism.service;

import java.util.List;

import com.crud.tourism.dto.TouristResponseDTO;
import com.crud.tourism.entity.Tourism;

public interface TouristServices {

	TouristResponseDTO findById(Long id);

	TouristResponseDTO saveTrip(Tourism tourism);

	TouristResponseDTO updateById(Long id, Tourism tourism);

	void deleteTrip(Tourism tourism);

	List<TouristResponseDTO> getAllTrips();

	List<TouristResponseDTO> getAllTripsByDate(String date);

}
