void keyPressed() {
  if (key == UP)       up = true;
  if (key == LEFT)     left = true;
  if (key == RIGHT)    right = true;
  if (key == DOWN)     down = true;
}

void keyReleased() {
  if (key == UP)       up = false;
  if (key == LEFT)     left = false;
  if (key == RIGHT)    right = false;
  if (key == DOWN)      down = false;
}

float radiusIncrement = 10;

void detectKeys() {
  println(ballRadius);
  if (left)
    ballX = ballX - radiusIncrement;
  if (right) 
    ballX = ballX + radiusIncrement;
    if(up)
    ballY = ballY - radiusIncrement;
    if(down)
    ballY = ballY + radiusIncrement;
}