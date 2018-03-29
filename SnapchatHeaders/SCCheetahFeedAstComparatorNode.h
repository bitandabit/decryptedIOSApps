//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class SCCheetahFeedAstNode;

@interface SCCheetahFeedAstComparatorNode : NSObject <NSCopying, NSCoding>
{
    long long _comparatorNodeType;
    SCCheetahFeedAstNode *_left;
    SCCheetahFeedAstNode *_right;
    SCCheetahFeedAstNode *_trueValue;
    SCCheetahFeedAstNode *_falseValue;
}

@property(readonly, copy, nonatomic) SCCheetahFeedAstNode *falseValue; // @synthesize falseValue=_falseValue;
@property(readonly, copy, nonatomic) SCCheetahFeedAstNode *trueValue; // @synthesize trueValue=_trueValue;
@property(readonly, copy, nonatomic) SCCheetahFeedAstNode *right; // @synthesize right=_right;
@property(readonly, copy, nonatomic) SCCheetahFeedAstNode *left; // @synthesize left=_left;
@property(readonly, nonatomic) long long comparatorNodeType; // @synthesize comparatorNodeType=_comparatorNodeType;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithComparatorNodeType:(long long)arg1 left:(id)arg2 right:(id)arg3 trueValue:(id)arg4 falseValue:(id)arg5;
- (id)initWithCoder:(id)arg1;

@end
