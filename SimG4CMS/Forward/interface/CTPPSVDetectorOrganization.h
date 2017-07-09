// ////////////////////////////////
// Author 
// 
///////////////////////////////////

#ifndef CTPPSVDetectorOrganization_h
#define CTPPSVDetectorOrganization_h

#include "G4Step.hh"
#include <cstdint>

class CTPPSVDetectorOrganization {

public:
  CTPPSVDetectorOrganization(){};
  virtual ~CTPPSVDetectorOrganization(){};   
  virtual uint32_t GetUnitID(const  G4Step* aStep) const =0;

};      


#endif //CTPPSVDetectorOrganization_h
