#include "imagedansdiapo.h"

ImageDansDiapo::ImageDansDiapo(int p, unsigned int r ): _pos(p),_rang(r)
{
}

ImageDansDiapo::~ImageDansDiapo()
{
}


int ImageDansDiapo::getPos()const
{
   return this->_pos;
}

int ImageDansDiapo::getRang()const
{
   return this->_rang;
}

void ImageDansDiapo::setRang(int rang)
{
   this->_rang=rang;
}

void ImageDansDiapo::setPos(int position)
{
   this->_pos=position;
}




