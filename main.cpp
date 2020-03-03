#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>

using namespace std;

#define mp3ToWav "mp3ToWav.py"
#define jpgToPng "jpgToPng.py"
#define docsToPdf "docsToPdf.py"

void mp3ToWavFile(char *fileName);
void jpgToPngFile(char *fileName);

int main()
{

    return 0;
}

void mp3ToWavFile(char *fileName)
{
    ofstream mp3ToWavFile;
    mp3ToWavFile.open(mp3ToWav);
    mp3ToWavFile<<"from pydub import AudioSegment"<<endl;
    mp3ToWavFile<<"sound = AudioSegment.from_mp3(\""<<fileName<<".mp3\")"<<endl;
    mp3ToWavFile<<"sound.export(\""<<fileName<<".wav\", format = \"wav\")"<<endl;
    mp3ToWavFile.close();
}

void jpgToPngFile(char *fileName)
{
    ofstream jpgToPngFile;
    jpgToPngFile.open(jpgToPng);
    jpgToPngFile<<"from PIL import Image"<<endl;
    jpgToPngFile<<"im = Image.open('"<<fileName<<".jpg')"<<endl;
    jpgToPngFile<<"im.save('"<<fileName<<".png')"<<endl;
    jpgToPngFile.close();
}



