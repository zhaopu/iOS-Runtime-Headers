/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

@class NSArray, NSString, NSNumber, NSMutableArray;

@interface ASSearchStore : ASItem  {
    NSMutableArray *_results;
    NSNumber *_status;
    NSNumber *_total;
    NSString *_range;
}

@property(retain) NSArray * results;
@property(copy) NSNumber * status;
@property(copy) NSNumber * total;
@property(copy) NSString * range;

+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)frontingBasicTypes;
+ (BOOL)parsingWithSubItems;
+ (BOOL)parsingLeafNode;
+ (BOOL)acceptsTopLevelLeaves;

- (void)setStatus:(id)arg1;
- (void)setRange:(id)arg1;
- (id)total;
- (id)range;
- (id)status;
- (id)description;
- (id)results;
- (void)setResults:(id)arg1;
- (void)dealloc;
- (void)setTotal:(id)arg1;
- (void)addResult:(id)arg1;
- (id)asParseRules;

@end