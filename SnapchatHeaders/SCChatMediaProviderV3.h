//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCChatMediaProvider-Protocol.h"

@class NSString, SCChatMediaContent;

@interface SCChatMediaProviderV3 : NSObject <SCChatMediaProvider>
{
    SCChatMediaContent *_chatMediaContent;
}

- (void).cxx_destruct;
- (void)thumbnailImageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)isLaguna;
- (_Bool)isUploaded;
- (_Bool)isProcessingOrUploading;
- (_Bool)isLoading;
- (_Bool)isMediaDataLoadedInCache;
- (id)mediaId;
- (id)initWithChatMediaContent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
