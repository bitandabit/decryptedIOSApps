//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface SCMediaEndpointParameters : NSObject
{
    NSString *_storyId;
    NSString *_storyEncoding;
    NSString *_storyEncodingErrorReason;
    NSString *_chatId;
    NSString *_conversationId;
}

@property(copy, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
@property(copy, nonatomic) NSString *chatId; // @synthesize chatId=_chatId;
@property(copy, nonatomic) NSString *storyEncodingErrorReason; // @synthesize storyEncodingErrorReason=_storyEncodingErrorReason;
@property(copy, nonatomic) NSString *storyEncoding; // @synthesize storyEncoding=_storyEncoding;
@property(copy, nonatomic) NSString *storyId; // @synthesize storyId=_storyId;
- (void).cxx_destruct;

@end

