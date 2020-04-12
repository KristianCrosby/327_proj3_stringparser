/*
 * StringParserClass.cpp
 *
 *  Created on: Oct 8, 2017
 *      Author: keith
 */

#include <string>
#include <string.h>
#include "../327_proj3_test/includes/StringParserClass.h"
#include "../327_proj3_test/includes/constants.h"

using namespace std;
using namespace KP_StringParserClass;

char *pStartTag;
char *pEndTag;
bool areTagsSet;


StringParserClass::StringParserClass() {
	pStartTag = NULL;
	pEndTag = NULL;
	areTagsSet = false;
}

StringParserClass::~StringParserClass() {
	cleanup();
}

int StringParserClass::setTags(const char *pStart, const char *pEnd) {
	if (pStart == NULL || pEnd == NULL) {
			return ERROR_TAGS_NULL;
		}
		pStartTag = new char[strlen(pStart)];
		pEndTag = new char[strlen(pEnd)];

		strncpy(pStartTag, pStart, strlen(pStart));
		strncpy(pEndTag, pEnd, strlen(pEnd));

		areTagsSet = true;
		return SUCCESS;

}


int StringParserClass::getDataBetweenTags(char *pDataToSearchThru, std::vector<std::string> &myVector) {
	myVector.clear();
		if (pStartTag == NULL) {
			return ERROR_TAGS_NULL;
		}
		else if (pEndTag == NULL){
			return ERROR_TAGS_NULL;
		}
		else if (pStartTag == 0){
			return ERROR_TAGS_NULL;
		}
		else if (pEndTag == 0) {
			return ERROR_TAGS_NULL;
		}
		else if (pDataToSearchThru == NULL) {
			return ERROR_DATA_NULL;
		}

	while (*pDataToSearchThru != "\0"){
		string data = " ";



	}
}

void StringParserClass::cleanup() {
	*pStartTag = NULL;
	*pEndTag = NULL;
	areTagsSet = false;
}

int StringParserClass::findTag(char *pTagToLookFor, char *&pStart, char *&pEnd) {
	int len = strlen(pTagToLookFor);
		if (pStart == NULL || pEnd == NULL) {
			return ERROR_TAGS_NULL;
		}
		int i = 0;
		while (pStart[i] != 0) {
			bool found = true;
		}


}








