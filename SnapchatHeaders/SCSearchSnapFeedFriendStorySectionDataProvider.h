//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCSearchSectionDataProviding-Protocol.h"

@class Friend, NSString, SCBitmojiManager, SCSearchEventListenerAnnouncer, SCSearchFriendProvider, SCSearchFriendStoryThumbnailDownloader;
@protocol NSCopying, SCPerforming, SCSearchSectionDataProvidingDelegate;

@interface SCSearchSnapFeedFriendStorySectionDataProvider : NSObject <SCSearchSectionDataProviding>
{
    long long _dataLoadingStatus;
    SCSearchFriendProvider *_friendProvider;
    SCBitmojiManager *_bitmojiManager;
    SCSearchFriendStoryThumbnailDownloader *_thumbnailDownloader;
    Friend *_friend;
    SCSearchEventListenerAnnouncer *_eventAnnouncer;
    id <SCSearchSectionDataProvidingDelegate> _dataProviderDelegate;
    NSObject<NSCopying> *_sectionDataModel;
    id <SCPerforming> _updateQueuePerformer;
}

+ (id)announcerIdentifier;
@property(retain, nonatomic) id <SCPerforming> updateQueuePerformer; // @synthesize updateQueuePerformer=_updateQueuePerformer;
@property(copy, nonatomic) NSObject<NSCopying> *sectionDataModel; // @synthesize sectionDataModel=_sectionDataModel;
@property(nonatomic) __weak id <SCSearchSectionDataProvidingDelegate> dataProviderDelegate; // @synthesize dataProviderDelegate=_dataProviderDelegate;
- (void).cxx_destruct;
- (id)_containerViewModelAtIndexPath:(id)arg1;
- (void)_configureSnapFeedStoryCollectionViewCell:(id)arg1;
- (long long)dataLoadingStatus;
- (id)configurationBlocksByReuseIdentifier;
- (id)contentCellClassesByReuseIdentifier;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (void)containerCellViewModelsForIndexPaths:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)initWithSearchSession:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

