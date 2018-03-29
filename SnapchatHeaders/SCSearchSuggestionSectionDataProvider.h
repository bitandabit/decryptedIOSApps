//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCSearchSectionDataProviding-Protocol.h"

@class NSString, SCSearchEventListenerAnnouncer, SCUserSession;
@protocol NSCopying, SCPerforming, SCSearchSectionDataProvidingDelegate;

@interface SCSearchSuggestionSectionDataProvider : NSObject <SCSearchSectionDataProviding>
{
    SCUserSession *_userSession;
    SCSearchEventListenerAnnouncer *_eventAnnouncer;
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
- (void)_updateSectionDataModelWithDataModel:(id)arg1;
- (void)_handleSuggestionPillsResponseWithSuggestions:(id)arg1 isFromCache:(_Bool)arg2 latency:(double)arg3;
- (void)_fetchSuggestionsWithStartDate:(id)arg1;
- (void)_fetchAutoSuggestionsWithSectionDataModel:(id)arg1;
- (long long)dataLoadingStatus;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (id)contentCellClassesByReuseIdentifier;
- (void)containerCellViewModelsForIndexPaths:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)initWithUserSession:(id)arg1;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
