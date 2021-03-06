//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GenericSettingsViewController.h"

#import "FriendsTableIndexDelegate-Protocol.h"
#import "SCMapModalViewControllerSubclass-Protocol.h"
#import "SCSearchBarDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class FriendsTableIndex, NSArray, NSDictionary, NSMutableSet, NSString, SCFriendFilter, SCMapFloatingActionButton, SCMapModalViewController, SCSearchBar, SCUserSession, UIImage, UILabel, UITableView, UIView;
@protocol SCMapFriendChooserDelegate;

@interface SCMapFriendChooser : GenericSettingsViewController <UITableViewDataSource, UITableViewDelegate, UIScrollViewDelegate, FriendsTableIndexDelegate, SCSearchBarDelegate, SCMapModalViewControllerSubclass>
{
    SCUserSession *_userSession;
    NSArray *_friendsToExclude;
    NSArray *_orderedSectionKeys;
    NSDictionary *_sectionKeysToFriendsOrderedSets;
    NSDictionary *_sectionKeysToSectionHeaderTitles;
    NSMutableSet *_selectedFriendUserIds;
    SCFriendFilter *_friendFilter;
    NSArray *_searchResultFriends;
    long long _sharingLocationWithYouShown;
    long long _recentsShown;
    long long _friendCount;
    UIView *_containerView;
    UITableView *_tableView;
    FriendsTableIndex *_tableIndex;
    UIView *_tableHeader;
    UILabel *_tableHeaderLabel;
    SCSearchBar *_searchBar;
    double _doneButtonKeyboardOffset;
    UIImage *_checkmarkImage;
    UIImage *_selectAllButtonImage;
    UIImage *_pinImage;
    _Bool _shouldDisableDoneButtonForNoSelection;
    SCMapModalViewController *_parentModalViewController;
    id <SCMapFriendChooserDelegate> _delegate;
    SCMapFloatingActionButton *_doneButton;
}

+ (id)friendsExcludedFromLocationSharingWithFriendsProvider:(id)arg1;
@property(retain, nonatomic) SCMapFloatingActionButton *doneButton; // @synthesize doneButton=_doneButton;
@property(nonatomic) _Bool shouldDisableDoneButtonForNoSelection; // @synthesize shouldDisableDoneButtonForNoSelection=_shouldDisableDoneButtonForNoSelection;
@property(nonatomic) __weak id <SCMapFriendChooserDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak SCMapModalViewController *parentModalViewController; // @synthesize parentModalViewController=_parentModalViewController;
- (void).cxx_destruct;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (id)imageForLeftButtonInState:(unsigned long long)arg1;
- (id)textColorForHeader:(id)arg1;
- (id)titleForHeader:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBar:(id)arg1 didSearch:(id)arg2;
- (void)_updateTableViewContentInsets;
- (void)searchBarDidEndEditing:(id)arg1;
- (void)searchBarDidBeginEditing:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)_userDidTapDoneButton:(id)arg1;
- (void)modalViewControllerPanGestureRecognizerDidFinish:(id)arg1;
- (_Bool)modalViewController:(id)arg1 panGestureRecognizer:(id)arg2 shouldBeginInView:(id)arg3;
- (_Bool)modalViewController:(id)arg1 panGestureRecognizerWantsToBeginInView:(id)arg2 withVelocity:(struct CGPoint)arg3;
- (void)scrollToIndex:(BOOL)arg1;
- (void)_userDidSelectViewMoreRecentsCell;
- (void)_userDidSelectViewMoreSharingWithYouCell;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)_areAllFriendsSelected;
- (_Bool)_areAllBestFriendsSelected;
- (void)_toggleAllFriends;
- (void)_toggleBestFriends;
- (void)_configureCellForViewMoreRecents:(id)arg1;
- (void)_configureCellForViewMoreSharingLocationWithYou:(id)arg1;
- (void)_configureCellForFriend:(id)arg1 cell:(id)arg2 supportsPin:(_Bool)arg3 animated:(_Bool)arg4;
- (double)_maxWidthForCells;
- (void)_reloadUI;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)_reload;
- (id)_filteredFriendsArray:(id)arg1 excludingFriends:(id)arg2;
- (_Bool)_indexPathIsInSharingWithYouSection:(id)arg1;
- (id)_indexPathsForFriend:(id)arg1;
- (id)_sortedFriendsSharingLocation;
- (_Bool)_indexPathRepresentsViewMoreRecentsCell:(id)arg1;
- (_Bool)_shouldShowViewMoreRecentsCell;
- (_Bool)_indexPathRepresentsViewMoreSharingWithYouCell:(id)arg1;
- (_Bool)_shouldShowViewMoreSharingWithYouCell;
- (id)_friendAtIndexPath:(id)arg1;
- (void)_highlightTextInSearchBarIfSearching;
@property(readonly, nonatomic) _Bool searching;
@property(retain, nonatomic) NSArray *selectedFriends;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

