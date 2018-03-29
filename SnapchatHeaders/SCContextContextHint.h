//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, SCContextAffordance, SCContextContentMetadata;

@interface SCContextContextHint : GPBMessage
{
}

+ (id)descriptor;
+ (id)hintFromHasContext:(_Bool)arg1;
+ (id)hintFromEncodedString:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SCContextAffordance *affordance; // @dynamic affordance;
@property(retain, nonatomic) SCContextContentMetadata *contentMetadata; // @dynamic contentMetadata;
@property(nonatomic) _Bool hasAffordance; // @dynamic hasAffordance;
@property(nonatomic) _Bool hasContentMetadata; // @dynamic hasContentMetadata;
@property(nonatomic) int hint; // @dynamic hint;
@property(retain, nonatomic) NSMutableArray *moreContextArray; // @dynamic moreContextArray;
@property(readonly, nonatomic) unsigned long long moreContextArray_Count; // @dynamic moreContextArray_Count;
@property(nonatomic) long long timestamp; // @dynamic timestamp;

@end

