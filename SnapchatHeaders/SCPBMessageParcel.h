//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, NSString;

@interface SCPBMessageParcel : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *contents; // @dynamic contents;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(retain, nonatomic) NSMutableArray *mediaArray; // @dynamic mediaArray;
@property(readonly, nonatomic) unsigned long long mediaArray_Count; // @dynamic mediaArray_Count;
@property(copy, nonatomic) NSData *payload; // @dynamic payload;
@property(copy, nonatomic) NSString *tag; // @dynamic tag;
@property(copy, nonatomic) NSString *tagVersion; // @dynamic tagVersion;
@property(copy, nonatomic) NSString *type; // @dynamic type;

@end

