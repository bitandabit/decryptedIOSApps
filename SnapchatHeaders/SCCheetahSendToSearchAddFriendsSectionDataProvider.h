//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCSearchEventListener-Protocol.h"
#import "SCSearchSectionDataProviding-Protocol.h"
#import "SCSearchUpdateListener-Protocol.h"

@class NSString, SCCheetahSendToRecipientDataProvider, SCSearchEventListenerAnnouncer, SCSendToSelectionStateManager, SCUserSession;
@protocol NSCopying, SCPerforming, SCSearchSectionDataProvidingDelegate;

@interface SCCheetahSendToSearchAddFriendsSectionDataProvider : NSObject <SCSearchUpdateListener, SCSearchEventListener, SCSearchSectionDataProviding>
{
    SCSearchEventListenerAnnouncer *_eventAnnouncer;
    SCUserSession *_userSession;
    SCCheetahSendToRecipientDataProvider *_dataProvider;
    SCSendToSelectionStateManager *_selectionStateManager;
    NSString *_lastQueryText;
    long long _dataLoadingStatus;
    id <SCSearchSectionDataProvidingDelegate> _dataProviderDelegate;
    NSObject<NSCopying> *_sectionDataModel;
    id <SCPerforming> _updateQueuePerformer;
}

+ (id)announcerIdentifier;
@property(retain, nonatomic) id <SCPerforming> updateQueuePerformer; // @synthesize updateQueuePerformer=_updateQueuePerformer;
@property(copy, nonatomic) NSObject<NSCopying> *sectionDataModel; // @synthesize sectionDataModel=_sectionDataModel;
@property(nonatomic) __weak id <SCSearchSectionDataProvidingDelegate> dataProviderDelegate; // @synthesize dataProviderDelegate=_dataProviderDelegate;
- (void).cxx_destruct;
- (void)_updateSectionModelForQuery:(id)arg1 contactSnapchatters:(id)arg2 searchedUser:(id)arg3;
- (void)_fetchResultsForQuery:(id)arg1;
- (void)_didSearchQuery:(id)arg1 results:(id)arg2 searchedUser:(id)arg3;
- (id)_searchContainerCellViewModel:(id)arg1;
- (void)_configureRecipientCollectionViewCell:(id)arg1;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)didUpdateWithAnnouncerIdentifier:(id)arg1;
- (id)configurationBlocksByReuseIdentifier;
- (id)contentCellClassesByReuseIdentifier;
- (void)containerCellViewModelsForIndexPaths:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (long long)dataLoadingStatus;
- (id)initWithUserSession:(id)arg1 dataProvider:(id)arg2 selectionStateManager:(id)arg3;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

