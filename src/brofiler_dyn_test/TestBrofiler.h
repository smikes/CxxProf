
#ifndef _TEST_BROFILER_H_
#define _TEST_BROFILER_H_

#include "brofiler_dyn_test/common.h"
#include "brofiler_static/IDynBrofiler.h"

class Brofiler_Dyn_Test_EXPORT TestBrofiler: public IDynBrofiler
{
public:
    TestBrofiler();
    virtual ~TestBrofiler();
    
    boost::shared_ptr<IActivity> createActivity(const std::string& name);
    std::string toString() const;
};

#endif //_TEST_BROFILER_H_