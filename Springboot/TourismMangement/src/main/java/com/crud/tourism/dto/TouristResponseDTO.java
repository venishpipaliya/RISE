package com.crud.tourism.dto;

import lombok.AllArgsConstructor;
import lombok.Getter;
import lombok.NoArgsConstructor;
import lombok.Setter;

@Getter
@Setter
@AllArgsConstructor
@NoArgsConstructor

public class TouristResponseDTO {

	private long id;
	private String name;
	private String date;

}
