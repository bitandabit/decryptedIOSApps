//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCBaseMessage.h"

@interface SCChatScreenshot : SCBaseMessage
{
    _Bool _isScreenRecording;
    long long _mediaType;
}

@property(nonatomic) _Bool isScreenRecording; // @synthesize isScreenRecording=_isScreenRecording;
@property(nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
- (id)logEventName;
- (_Bool)isScreenshot;
- (_Bool)shouldShowFailure;
- (long long)notificationType;
- (long long)messageType;
- (id)sendJSON;
- (_Bool)canDelete;
- (_Bool)canUnsave;
- (_Bool)canSave;
- (_Bool)shouldAutoRetry;
- (id)initWithUsername:(id)arg1 dictionary:(id)arg2;

@end
