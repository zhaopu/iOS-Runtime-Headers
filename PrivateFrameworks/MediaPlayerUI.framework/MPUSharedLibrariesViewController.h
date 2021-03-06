/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@class UINavigationController, _MPUSharedLibrariesViewController;

@interface MPUSharedLibrariesViewController : UIViewController {
    UINavigationController *_navigationController;
    _MPUSharedLibrariesViewController *_sharedLibariesViewController;
    BOOL _showsCancelButton;
}

@property BOOL showsCancelButton;
@property BOOL showsLocalLibrary;

- (void).cxx_destruct;
- (void)dismissSharedLibrariesViewController:(BOOL)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)presentSharedLibrariesViewController:(BOOL)arg1;
- (void)setShowsCancelButton:(BOOL)arg1;
- (void)setShowsLocalLibrary:(BOOL)arg1;
- (BOOL)showsCancelButton;
- (BOOL)showsLocalLibrary;

@end
