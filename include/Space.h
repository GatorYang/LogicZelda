#ifndef SPACE_H_INCLUDED
#define SPACE_H_INCLUDED

class Space
{
   private:
      bool isMonster; //!< Member variable "isMonster"
      bool obstacle; //!< Member variable "isObstacle"
      bool door; //!< Member variable "door"
      int value;
      int monVal;
      
   public:
      /** Default constructor */
      Space();
      /** Constructor for only spaces */
      Space(int value);
      /** Constructor to include a door */
      //Space(int value, bool hasDoor);
      /** Constructor to tell whether the door is unlocked or locked */
      //Space(int value, bool hasDoor, bool isDoorLocked);

      /** Access isMonster
       * \return The current value of isMonster
       */
      bool getMonster() { return isMonster; }

      /** Access isObstacle
       * \return The current value of isObstacle
       */
      bool isObstacle() { return obstacle; }

      /** Access hasDoor
       * \return The current value of hasDoor
       */
      bool hasDoor() { return door; }
      
      int getMonVal() { return monVal;}
      int getValue() { return value;}
      void killMon();

   protected:
};

#endif // SPACE_H
