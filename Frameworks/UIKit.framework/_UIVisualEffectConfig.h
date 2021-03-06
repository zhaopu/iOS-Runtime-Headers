/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSMutableArray, _UIVisualEffectLayerConfig;

@interface _UIVisualEffectConfig : NSObject {
    _UIVisualEffectLayerConfig *_contentConfig;
    NSMutableArray *_layerConfigs;
}

@property(readonly) _UIVisualEffectLayerConfig * contentConfig;
@property(readonly) NSArray * layerConfigs;

+ (id)configWithContentConfig:(id)arg1;
+ (id)configWithLayerConfigs:(id)arg1;

- (void)addLayerConfig:(id)arg1;
- (id)contentConfig;
- (void)dealloc;
- (void)enumerateLayerConfigs:(id)arg1;
- (id)layerConfigs;

@end
