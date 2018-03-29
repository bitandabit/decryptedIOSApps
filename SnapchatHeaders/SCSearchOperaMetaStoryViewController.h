//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCSearchContentViewControlling-Protocol.h"
#import "SCSearchEventAnnouncing-Protocol.h"
#import "SCSearchEventListener-Protocol.h"
#import "SCSearchOperaMetaStoryViewDelegate-Protocol.h"
#import "SCSearchQueryResultControllerDelegate-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSString, SCSearchContentViewControllerContext, SCSearchEventListenerAnnouncer, SCSearchMetaStoryTransitionController, SCSearchOperaMetaStoryView, SCSearchQuery, SCSearchQueryResultController, SCUserSession;
@protocol SCSearchQueryCoordinating, SCSearchSectionCreating;

@interface SCSearchOperaMetaStoryViewController : UIViewController <SCSearchEventListener, SCSearchQueryResultControllerDelegate, SCSearchOperaMetaStoryViewDelegate, UICollectionViewDelegate, UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate, SCSearchContentViewControlling, SCSearchEventAnnouncing>
{
    SCSearchOperaMetaStoryView *_metaStoryView;
    SCSearchQueryResultController *_queryResultController;
    SCSearchMetaStoryTransitionController *_dismissalTransitionController;
    SCUserSession *_userSession;
    SCSearchQuery *_initialQuery;
    id <SCSearchQueryCoordinating> _queryCoordinator;
    id <SCSearchSectionCreating> _sectionCreator;
    SCSearchEventListenerAnnouncer *_eventAnnouncer;
    NSString *_debugQueryId;
    SCSearchContentViewControllerContext *_searchContentViewControllerContext;
}

+ (id)announcerIdentifier;
@property(retain, nonatomic) SCSearchContentViewControllerContext *searchContentViewControllerContext; // @synthesize searchContentViewControllerContext=_searchContentViewControllerContext;
- (void).cxx_destruct;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (void)_announceSearchViewControllerDismissEvent;
- (void)_updateCollectionViewAlpha:(double)arg1;
- (void)_setupDebugButton;
- (void)_handleGesture:(id)arg1;
- (id)presentingViewControllerForSearchQueryResultController:(id)arg1;
- (void)searchQueryResultController:(id)arg1 willUpdateResultForQuery:(id)arg2 fromQuery:(id)arg3;
- (void)searchQueryResultControllerDidUpdateQueryResult:(id)arg1;
- (void)searchQueryResultControllerWillUpdateQueryResult:(id)arg1;
- (void)searchQueryResultControllerDidDelayReloadFreshResult:(id)arg1;
- (_Bool)searchQueryResultControllerShouldReloadFreshResult:(id)arg1;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (_Bool)searchControllerShouldReturnWithSearchText:(id)arg1;
- (void)searchControllerDidChangeToText:(id)arg1 byChangingCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)searchControllerShouldRespondToTextChange:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)metaStoryView:(id)arg1 didTapDebugButton:(id)arg2;
- (id)resultsCollectionView;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithUserSession:(id)arg1 queryCoordinator:(id)arg2 sectionCreator:(id)arg3 initialQuery:(id)arg4;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

