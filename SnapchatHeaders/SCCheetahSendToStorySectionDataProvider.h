//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCSearchEventListener-Protocol.h"
#import "SCSearchSectionDataProviding-Protocol.h"
#import "SCSearchUpdateListener-Protocol.h"

@class NSString, SCCheetahSendToLogger, SCCheetahSendToStoryDataSource, SCSearchEventListenerAnnouncer, SCSearchQuery, SCSendToSelectionStateManager, SCUserSession;
@protocol NSCopying, SCPerforming, SCSearchSectionDataProvidingDelegate;

@interface SCCheetahSendToStorySectionDataProvider : NSObject <SCSearchSectionDataProviding, SCSearchUpdateListener, SCSearchEventListener>
{
    SCSearchEventListenerAnnouncer *_eventAnnouncer;
    SCUserSession *_userSession;
    SCCheetahSendToStoryDataSource *_dataSource;
    SCSendToSelectionStateManager *_selectionStateManager;
    SCSearchQuery *_lastQuery;
    SCCheetahSendToLogger *_logger;
    id <SCSearchSectionDataProvidingDelegate> _dataProviderDelegate;
    NSObject<NSCopying> *_sectionDataModel;
    id <SCPerforming> _updateQueuePerformer;
    long long _contentMode;
}

+ (id)announcerIdentifier;
@property(nonatomic) long long contentMode; // @synthesize contentMode=_contentMode;
@property(retain, nonatomic) id <SCPerforming> updateQueuePerformer; // @synthesize updateQueuePerformer=_updateQueuePerformer;
@property(copy, nonatomic) NSObject<NSCopying> *sectionDataModel; // @synthesize sectionDataModel=_sectionDataModel;
@property(nonatomic) __weak id <SCSearchSectionDataProvidingDelegate> dataProviderDelegate; // @synthesize dataProviderDelegate=_dataProviderDelegate;
- (void).cxx_destruct;
- (void)_configureRecipientCollectionViewCell:(id)arg1;
- (id)configurationBlocksByReuseIdentifier;
- (id)_viewModelFromSectionDataModel:(id)arg1 index:(long long)arg2 contentMode:(long long)arg3;
- (void)_updateSectionModelWithQuery:(id)arg1;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)didUpdateWithAnnouncerIdentifier:(id)arg1;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (id)contentCellClassesByReuseIdentifier;
- (void)containerCellViewModelsForIndexPaths:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 dataSource:(id)arg2 selectionStateManager:(id)arg3 logger:(id)arg4;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
