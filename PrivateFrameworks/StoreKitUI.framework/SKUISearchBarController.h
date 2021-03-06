/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, SKUIClientContext, SKUIFocusedTouchGestureRecognizer, SKUISearchBarViewElement, SKUISearchFieldController, UISearchBar, UIViewController;

@interface SKUISearchBarController : NSObject <SKUISearchFieldDelegate, UISearchBarDelegate> {
    SKUIFocusedTouchGestureRecognizer *_cancelTouchGestureRecognizer;
    SKUIClientContext *_clientContext;
    BOOL _displaysSearchBarInNavigationBar;
    UIViewController *_parentViewController;
    UISearchBar *_searchBar;
    SKUISearchBarViewElement *_searchBarViewElement;
    SKUISearchFieldController *_searchFieldController;
    BOOL _showsResultsForEmptyField;
    BOOL _usesSearchFieldController;
    SKUISearchBarViewElement *_viewElement;
}

@property(retain) SKUIClientContext * clientContext;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property BOOL displaysSearchBarInNavigationBar;
@property(readonly) unsigned int hash;
@property UIViewController * parentViewController;
@property(readonly) UISearchBar * searchBar;
@property(retain) SKUISearchBarViewElement * searchBarViewElement;
@property BOOL showsResultsForEmptyField;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelGestureAction:(id)arg1;
- (void)_customizeSearchBar:(id)arg1;
- (void)_customizeSearchFieldController:(id)arg1;
- (void)_dispatchChangeEventWithText:(id)arg1;
- (void)_dispatchSubmitEventWithText:(id)arg1 URL:(id)arg2 searchHintOriginalTerm:(id)arg3 searchHintIndex:(id)arg4;
- (id)_newSearchFieldController;
- (void)_removeCancelTouchGestureRecognizer;
- (id)_searchFieldController;
- (id)clientContext;
- (void)dealloc;
- (BOOL)displaysSearchBarInNavigationBar;
- (id)initWithSearchBarViewElement:(id)arg1;
- (id)parentViewController;
- (void)reloadAfterDocumentUpdate;
- (void)resignActive:(BOOL)arg1;
- (id)searchBar;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (id)searchBarViewElement;
- (void)searchFieldController:(id)arg1 requestSearch:(id)arg2;
- (void)searchFieldController:(id)arg1 searchBarDidChangeText:(id)arg2;
- (BOOL)searchFieldControllerShouldBeginEditing:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)setDisplaysSearchBarInNavigationBar:(BOOL)arg1;
- (void)setParentViewController:(id)arg1;
- (void)setSearchBarViewElement:(id)arg1;
- (void)setShowsResultsForEmptyField:(BOOL)arg1;
- (BOOL)showsResultsForEmptyField;

@end
