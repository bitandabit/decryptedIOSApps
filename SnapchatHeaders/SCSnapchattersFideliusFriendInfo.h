//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray;

@interface SCSnapchattersFideliusFriendInfo : NSObject <NSCopying>
{
    _Bool _shouldSendClearTextKey;
    NSArray *_devices;
}

@property(readonly, nonatomic) _Bool shouldSendClearTextKey; // @synthesize shouldSendClearTextKey=_shouldSendClearTextKey;
@property(readonly, copy, nonatomic) NSArray *devices; // @synthesize devices=_devices;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDevices:(id)arg1 shouldSendClearTextKey:(_Bool)arg2;

@end

