//
//  IntRuleQuad.h
//  FemSC
//
//  Created by Philippe Devloo on 7/30/15.
//
//

#ifndef __FemSC__IntRuleQuad__
#define __FemSC__IntRuleQuad__

#include <stdio.h>
#include "DataTypes.h"
#include "IntRule.h"

class IntRuleQuad : public IntRule
{
    

    public:

    // Default Constructor of integration rule for quadrilateral elements
    IntRuleQuad();
    
    // Constructor of integration rule for quadrilateral elements
    IntRuleQuad(int order);
  
    // Dimension of the integration rule
    virtual int Dimension() override{
        return 2;
    }
    
    // Return the maximum polynomial order that can be integrated exactly
    static int gMaxOrder()
    {
        return 5;
    }

    // Return the maximum polynomial order that can be integrated exactly
    virtual int MaxOrder() override
    {
        return gMaxOrder();
    }
    // Method to set polynomial order of the integration rule for quadrilateral elements
    virtual void SetOrder(int order) override;
  
    // Integration rule 2D (quadrilateral elements) method obtained from Numerical Recipes
    void gaulegQuad(const double x1, const double x2, VecDouble &x, VecDouble &w);

};


#endif /* defined(__FemSC__TIntRule1d__) */
