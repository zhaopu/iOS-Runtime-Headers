/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/SportsVoices.framework/SportsVoices
 */

@class SlotsInContext, NewProduction;



@interface Rule : GrammarPart 
{
    SlotsInContext *leftHandSide;
    NewProduction *rightHandSide;
    BOOL repeat;
}

+ (id)test;
+ (id)ruleWithLeftHandSide:(id)arg1 rightHandSide:(id)arg2;
+ (id)instanceFromPlist:(id)arg1;

- (id)description;
- (id)initWithLeftHandSide:(id)arg1 rightHandSideOverlays:(id)arg2 rightHandSideBaseIndices:(id)arg3;
- (id)initWithLeftHandSide:(id)arg1 rightHandSide:(id)arg2;
- (id)appliedTo:(id)arg1;
- (id)initFromPlist:(id)arg1;

@end