//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber;

@interface UrlCacheItem : NSObject
{
    long long _urlType;
    NSNumber *_expirationTime;
}

@property(readonly, nonatomic) NSNumber *expirationTime; // @synthesize expirationTime=_expirationTime;
@property(readonly, nonatomic) long long urlType; // @synthesize urlType=_urlType;
- (void).cxx_destruct;
- (_Bool)isExpired;
- (id)initWithUrlType:(long long)arg1 for:(id)arg2;

@end
