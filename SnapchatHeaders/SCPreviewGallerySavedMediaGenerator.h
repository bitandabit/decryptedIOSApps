//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class SCQueuePerformer, SCUserSession;

@interface SCPreviewGallerySavedMediaGenerator : NSObject
{
    SCUserSession *_userSession;
    SCQueuePerformer *_performer;
}

- (void).cxx_destruct;
- (void)_failToGenerateFile:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)_passSanityCheckForVideoData:(id)arg1;
- (void)generateGallerySavedMediaForVideo:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithUserSession:(id)arg1;

@end

