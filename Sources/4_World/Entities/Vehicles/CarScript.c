modded class CarScript extends Car 
{
  override void OnContact(string zoneName, vector localPos, IEntity other, Contact data)
  {
    // Do nothing. Prevents cars from getting damaged.
  }
}