// Helps in deallocating the memory
// It only deallocate the statically allocated memory
// delete ptr_name helps us to de allocate that memory , it actually makes that memory free

// Syntax 
~Class_name() {
  cout << "Destructor is called" << endl;

  // dynamically allocate -> issues : memory leak
  delete ptr_var;
}
