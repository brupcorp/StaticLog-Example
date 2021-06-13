#include "Log.h"

LogDevice* Log::ld;

void Log::out(const char* text){
	ld->out(text);
}
 
