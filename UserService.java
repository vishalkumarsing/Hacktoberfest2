package com.harshil.expensetracker.service;

import com.harshil.expensetracker.entity.User;
import com.harshil.expensetracker.entity.UserModel;
import com.harshil.expensetracker.exception.ItemAlreadyExistsException;
import com.harshil.expensetracker.exception.NoResourceFoundException;

public interface UserService {

    User createUser(UserModel userModel) throws ItemAlreadyExistsException;

    User read(Long id) throws NoResourceFoundException;

    User update(Long id,User user) throws NoResourceFoundException;

    void delete(Long id);
}
