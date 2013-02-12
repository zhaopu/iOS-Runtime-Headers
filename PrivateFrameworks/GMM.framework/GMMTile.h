/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSData;

@interface GMMTile : PBCodable {
    NSData *_tileData;
    NSInteger _tileXIndex;
    NSInteger _tileYIndex;
}

@property(retain) NSData *tileData;
@property NSInteger tileXIndex;
@property NSInteger tileYIndex;

+ (void*)createImageRefFromTileData:(id)arg1;

- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)init;
- (BOOL)readFrom:(id)arg1;
- (void)setTileData:(id)arg1;
- (void)setTileXIndex:(NSInteger)arg1;
- (void)setTileYIndex:(NSInteger)arg1;
- (id)tileData;
- (NSInteger)tileXIndex;
- (NSInteger)tileYIndex;
- (void)writeTo:(id)arg1;

@end