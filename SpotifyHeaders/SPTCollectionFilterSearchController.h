//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UISearchController.h"

#import "SPTNavigationManagerDelegate.h"

@class NSLayoutConstraint, NSString, SPTSearchBar, UIVisualEffectView;

@interface SPTCollectionFilterSearchController : UISearchController <SPTNavigationManagerDelegate>
{
    SPTSearchBar *_overriddenSearchBar;
    UIVisualEffectView *_topBackgroundView;
    NSLayoutConstraint *_backgroundHeightConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *backgroundHeightConstraint; // @synthesize backgroundHeightConstraint=_backgroundHeightConstraint;
@property(retain, nonatomic) UIVisualEffectView *topBackgroundView; // @synthesize topBackgroundView=_topBackgroundView;
@property(retain, nonatomic) SPTSearchBar *overriddenSearchBar; // @synthesize overriddenSearchBar=_overriddenSearchBar;
- (void).cxx_destruct;
- (id)searchBar;
- (void)viewDidLayoutSubviews;
- (void)applyLayoutConstraints;
- (void)viewDidLoad;
- (void)navigationManager:(id)arg1 willNavigateFromViewController:(id)arg2 toViewController:(id)arg3;
- (void)navigationManager:(id)arg1 didNavigateFromViewController:(id)arg2 toViewController:(id)arg3;
- (void)applyThemeLayout;
- (id)initWithSearchResultsController:(id)arg1 navigationManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
