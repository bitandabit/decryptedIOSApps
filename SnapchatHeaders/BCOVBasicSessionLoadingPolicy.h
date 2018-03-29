//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@interface BCOVBasicSessionLoadingPolicy : NSObject <NSCopying>
{
    _Bool _shouldPreloadSession;
    float _progressPercentage;
}

+ (id)sessionPreloadingWithProgressPercentage:(unsigned long long)arg1;
+ (id)sessionPreloadingNever;
@property(readonly, nonatomic) _Bool shouldPreloadSession; // @synthesize shouldPreloadSession=_shouldPreloadSession;
@property(nonatomic) float progressPercentage; // @synthesize progressPercentage=_progressPercentage;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (CDUnknownBlockType)sessionLoadPolicy;
- (id)initWithProgressPercentage:(unsigned long long)arg1;

@end
