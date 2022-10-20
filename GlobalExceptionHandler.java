package com.harshil.expensetracker.exception;

import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.ExceptionHandler;
import org.springframework.web.bind.annotation.RestController;

import java.util.Date;

@RestController
public class GlobalExceptionHandler {

    @ExceptionHandler(NoResourceFoundException.class)
    public ResponseEntity<ErrorDetails> handleNoResourceFoundException(NoResourceFoundException e){
        ErrorDetails errorDetails=new ErrorDetails(e.getMessage(),new Date(), HttpStatus.NOT_FOUND.value());
        return new ResponseEntity<>(errorDetails,HttpStatus.NOT_FOUND);
    }
    @ExceptionHandler(ItemAlreadyExistsException.class)
    public ResponseEntity<ErrorDetails> handleItemAlreadyExistsException(ItemAlreadyExistsException e){
        ErrorDetails errorDetails=new ErrorDetails(e.getMessage(),new Date(),HttpStatus.CONFLICT.value());
        return new ResponseEntity<>(errorDetails,HttpStatus.CONFLICT);
    }
    @ExceptionHandler(Exception.class)
    public ResponseEntity<ErrorDetails> handleException(Exception e){
        ErrorDetails errorDetails=new ErrorDetails(e.getMessage(),new Date(), HttpStatus.CONFLICT.value());
        return new ResponseEntity<>(errorDetails,HttpStatus.INTERNAL_SERVER_ERROR);
    }
}
