package com.crud.tourism.repository;

import java.util.List;

import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.stereotype.Repository;

import com.crud.tourism.entity.Tourism;

@Repository
public interface TourismRepository extends JpaRepository<Tourism, Long> {

	List<Tourism> findByName(String name);

}
