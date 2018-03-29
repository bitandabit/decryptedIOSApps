//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCSearchEventAnnouncing-Protocol.h"
#import "SCSearchEventListener-Protocol.h"
#import "SCSearchQueryStateAwareSupplementaryViewProviderDelegate-Protocol.h"
#import "SCSearchSectionBasedCollectionViewUpdaterDelegate-Protocol.h"

@class NSArray, NSString, SCSearchEventListenerAnnouncer, SCSearchQuery, SCSearchSectionBasedCollectionViewUpdater, SCSearchSectionController, UICollectionView;
@protocol SCSearchIntentHandler, SCSearchQueryCoordinating, SCSearchQueryResultControllerDelegate, SCSearchSectionCreating, UICollectionViewDelegate;

@interface SCSearchQueryResultController : NSObject <SCSearchEventListener, SCSearchSectionBasedCollectionViewUpdaterDelegate, SCSearchQueryStateAwareSupplementaryViewProviderDelegate, SCSearchEventAnnouncing>
{
    id <SCSearchQueryCoordinating> _queryCoordinator;
    id <SCSearchSectionCreating> _sectionCreator;
    id <SCSearchIntentHandler> _intentHandler;
    SCSearchSectionController *_sectionController;
    UICollectionView *_resultCollectionView;
    SCSearchQuery *_pendingQuery;
    long long _pendingResultState;
    SCSearchQuery *_displayedQuery;
    NSArray *_noResultSectionDescriptors;
    SCSearchEventListenerAnnouncer *_eventAnnouncer;
    id <SCSearchQueryResultControllerDelegate> _delegate;
    SCSearchSectionBasedCollectionViewUpdater *_collectionViewUpdater;
    SCSearchQuery *_query;
    long long _currentQueryResultState;
}

+ (id)announcerIdentifier;
@property(readonly, nonatomic) long long currentQueryResultState; // @synthesize currentQueryResultState=_currentQueryResultState;
@property(copy, nonatomic) SCSearchQuery *query; // @synthesize query=_query;
@property(readonly, nonatomic) SCSearchSectionBasedCollectionViewUpdater *collectionViewUpdater; // @synthesize collectionViewUpdater=_collectionViewUpdater;
@property(nonatomic) __weak id <SCSearchQueryResultControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_notifyQueryStateAwareSupplementaryViewProviders;
- (void)_announceNoResultEvent;
- (void)_updateWithNoResultSections;
- (_Bool)_hasItemsInResult;
- (void)_updateCurrentResultState:(long long)arg1;
- (void)_applySectionsChangesWithQuery:(id)arg1 newSectionWithConfigurations:(id)arg2 resultState:(long long)arg3;
- (void)_updateResultsWithQuery:(id)arg1 sectionDescriptors:(id)arg2 resultState:(long long)arg3;
- (void)_applyNewQueryResults:(id)arg1;
- (void)queryStateAwareSupplementaryViewProviderWantsReload:(id)arg1;
- (id)presentingViewControllerForSectionBasedCollectionViewUpdater:(id)arg1;
- (void)sectionBasedCollectionViewUpdater:(id)arg1 didUpdateSectionsWithAnimationFinished:(_Bool)arg2;
- (void)sectionBasedCollectionViewUpdater:(id)arg1 didUpdateLayoutWithAnimationFinished:(_Bool)arg2;
- (struct UIEdgeInsets)sectionInsetsForSectionBasedCollectionViewUpdater:(id)arg1;
- (void)sectionBasedCollectionViewUpdater:(id)arg1 didTearDownSections:(id)arg2;
- (void)sectionBasedCollectionViewUpdater:(id)arg1 didSetUpSections:(id)arg2;
- (void)sectionBasedCollectionViewUpdaterWillUpdateCollectionView:(id)arg1;
@property(nonatomic) __weak id <UICollectionViewDelegate> collectionViewDelegate;
- (id)initWithResultCollectionView:(id)arg1 queryCoordinator:(id)arg2 sectionCreator:(id)arg3 intentHandler:(id)arg4;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

