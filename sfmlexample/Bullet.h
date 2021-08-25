#ifndef BULLET_H
#define BULLET_H
/*
    Authors:
    076bct021 Chhatra Bikram Shah
    076bct013 Ayush parajuli
    076bct023 Dhiraj Acharya
*/
#include <SFML/Graphics.hpp>


class Bullet : public sf::Sprite
{
    public:
        /**  constructor */
        Bullet(sf::Texture& texture,int px,int py);
        /** Default destructor */
        virtual ~Bullet();

        /** Access posx
         * \return The current value of posx
         */
        int Getposx() { return posx; }
        /** Set posx
         * \param val New value to set
         */
        void Setposx(int val) { posx = val; }
        /** Access posy
         * \return The current value of posy
         */
        int Getposy() { return posy; }
        /** Set posy
         * \param val New value to set
         */
        void Setposy(int val) { posy = val; }
        /** Access xsize
         * \return The current value of xsize
         */
        int Getxsize();
        /** Set xsize
         * \param val New value to set
         */

        int Getysize() ;//returns the height of Bullet
        void moveup();
        bool getdestroy();
        void setdestroy( bool val){ destroy=val;}

    protected:

    private:
        int posx; //!< Member variable "posx"//it stores x position of our bullet object
        int posy; //!< Member variable "posy"//it stores y position of our bullet object.
        int xsize; //!< Member variable "xsize"//it stores width of the bullet object
        int ysize; //!< Member variable "ysize"//it stores height of the bullet object
        bool destroy; //!<it stores whether the bullet will be destroyed (when true) or not(when false)
};

#endif // BULLET_H
