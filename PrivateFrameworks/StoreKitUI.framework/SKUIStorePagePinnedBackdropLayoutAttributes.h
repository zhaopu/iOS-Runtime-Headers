/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, UIColor;

@interface SKUIStorePagePinnedBackdropLayoutAttributes : UICollectionViewLayoutAttributes <NSCopying> {
    UIColor *_backdropColor;
    NSString *_backdropGroupName;
    int _backdropStyle;
    BOOL _hidesBackdropView;
    float _transitionProgress;
}

@property(retain) UIColor * backdropColor;
@property(copy) NSString * backdropGroupName;
@property int backdropStyle;
@property BOOL hidesBackdropView;
@property float transitionProgress;

- (void).cxx_destruct;
- (id)backdropColor;
- (id)backdropGroupName;
- (int)backdropStyle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)hidesBackdropView;
- (void)setBackdropColor:(id)arg1;
- (void)setBackdropGroupName:(id)arg1;
- (void)setBackdropStyle:(int)arg1;
- (void)setHidesBackdropView:(BOOL)arg1;
- (void)setTransitionProgress:(float)arg1;
- (float)transitionProgress;

@end
