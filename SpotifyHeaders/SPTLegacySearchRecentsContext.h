//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTSearchHistoryViewControllerDelegate.h"
#import "SPTSearchRecentsContext.h"

@class NSString, SPTSearchHistoryViewController, SearchViewModel, UIViewController;

@interface SPTLegacySearchRecentsContext : NSObject <SPTSearchHistoryViewControllerDelegate, SPTSearchRecentsContext>
{
    id <SPTSearchRecentsContextDelegate> _delegate;
    SPTSearchHistoryViewController *_searchHistoryViewController;
    SearchViewModel *_searchViewModel;
}

@property(retain, nonatomic) SearchViewModel *searchViewModel; // @synthesize searchViewModel=_searchViewModel;
@property(retain, nonatomic) SPTSearchHistoryViewController *searchHistoryViewController; // @synthesize searchHistoryViewController=_searchHistoryViewController;
@property(nonatomic) __weak id <SPTSearchRecentsContextDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)searchHistoryViewControllerDidClearHistory:(id)arg1;
- (void)searchHistoryViewController:(id)arg1 didSelectSavedSearchString:(id)arg2;
- (void)searchHistoryViewControllerDidStartScrolling:(id)arg1;
- (unsigned long long)searchHistoryViewControllerEntityModelVersion:(id)arg1;
- (_Bool)searchHistoryViewControllerShouldDisplayHeaderView:(id)arg1;
- (void)addSearchStringToHistory:(id)arg1;
@property(readonly, nonatomic) _Bool isSearchHistoryIsEmpty;
@property(readonly, nonatomic) UIViewController *viewController;
- (id)initWithSearchHistory:(id)arg1 searchViewModel:(id)arg2 glueTheme:(id)arg3 logCenter:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

