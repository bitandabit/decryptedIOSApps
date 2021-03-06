//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCGalleryLagunaContentListener-Protocol.h"

@class NSString, SCGalleryLagunaContentLoader;
@protocol SCGalleryLagunaContentTransferStatusUpdaterDelegate;

@interface SCGalleryLagunaContentTransferStatusUpdater : NSObject <SCGalleryLagunaContentListener>
{
    SCGalleryLagunaContentLoader *_contentLoader;
    unsigned long long _interestedLagunaContent;
    id <SCGalleryLagunaContentTransferStatusUpdaterDelegate> _delegate;
    NSString *_snapId;
}

@property(readonly, copy, nonatomic) NSString *snapId; // @synthesize snapId=_snapId;
@property(nonatomic) __weak id <SCGalleryLagunaContentTransferStatusUpdaterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didCancelDownloadForContentComponent:(unsigned long long)arg1 forContent:(id)arg2;
- (void)didInterruptDownloadForContentComponent:(unsigned long long)arg1 forContent:(id)arg2;
- (void)didPauseForContentComponent:(unsigned long long)arg1 forContent:(id)arg2;
- (void)didFinishDownloadForContentComponent:(unsigned long long)arg1 forContent:(id)arg2;
- (void)didReceiveDataForContentComponent:(unsigned long long)arg1 forContent:(id)arg2;
- (void)dealloc;
- (id)initWithLagunaContentLoader:(id)arg1 interestedLagunaContent:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

