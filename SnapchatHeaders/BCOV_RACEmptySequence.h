//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BCOV_RACSequence.h"

@interface BCOV_RACEmptySequence : BCOV_RACSequence
{
}

+ (id)empty;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (id)bind:(CDUnknownBlockType)arg1 passingThroughValuesFromSequence:(id)arg2;
- (id)tail;
- (id)head;

@end

