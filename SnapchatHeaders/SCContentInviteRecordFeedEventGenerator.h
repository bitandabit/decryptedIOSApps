//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSMutableDictionary, NSString, SCContentInviteSnap;

@interface SCContentInviteRecordFeedEventGenerator : NSObject
{
    NSString *_recordId;
    NSMutableDictionary *_sendingSnaps;
    NSMutableDictionary *_failedSnaps;
    SCContentInviteSnap *_lastSentSnap;
    NSDate *_lastInteractionTimestamp;
}

@property(retain, nonatomic) NSDate *lastInteractionTimestamp; // @synthesize lastInteractionTimestamp=_lastInteractionTimestamp;
- (void).cxx_destruct;
- (id)_snapEventInfo:(id)arg1;
- (id)_snapEventForRecord:(id)arg1;
- (id)_failedEventForRecord:(id)arg1;
- (id)_sendingEventForRecord:(id)arg1;
- (void)updateWithContentInviteSnap:(id)arg1;
- (id)interactionEventBatchWithRecord:(id)arg1;
- (id)initWithRecordId:(id)arg1;

@end
