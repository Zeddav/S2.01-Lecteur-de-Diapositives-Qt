#include "imagedansdiapo.h"

ImageDansDiapo::ImageDansDiapo(): _pos(0),_rang(0)
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




