/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UITextField, SUComposeTextFieldConfiguration;



@interface SUComposeTextField : UIView <UITextFieldDelegate>
{
    id _delegate;
    UITextField *_textField;
    SUComposeTextFieldConfiguration *_configuration;
    struct CGSize { 
        float width; 
        float height; 
    } _labelSize;
    NSInteger _currentTextLength;
}

+ (float)defaultHeightForPosition:(struct { NSUInteger x1; NSUInteger x2; })arg1;

- (id)initWithConfiguration:(id)arg1;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)configuration;
- (BOOL)isValid;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (BOOL)textField:(id)arg1 shouldInsertText:(id)arg2 replacingRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg3;
- (void)_textChanged:(id)arg1;

@end