void setWindow(){
  	glutInitWindowSize( 1000, 1000 ); // задаем расширение окна
	glutInitWindowPosition( 0, 0 ); //задаем расположение окна относительно рабочего стола(указываем координату левого верхнего угла нашего окна
  	glutCreateWindow( "MyGame" ); //создаем окно и даем ему имя
  	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glClearColor(1.0 , 1.0 , 1.0, 1.0); //очищаем экран
}

void Draw(){
	glFlush();
	glClear(GL_COLOR_BUFFER_BIT);
}

void drawBackground(){
	
}