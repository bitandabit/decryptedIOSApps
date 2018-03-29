//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSDictionary, NSURL;
@protocol ZZChannel;

@interface ZZArchive : NSObject
{
    id <ZZChannel> _channel;
    NSDictionary *_entryWithFileName;
    NSData *_contents;
    NSArray *_entries;
}

+ (id)archiveWithData:(id)arg1 error:(out id *)arg2;
+ (id)archiveWithURL:(id)arg1 error:(out id *)arg2;
+ (id)sc_archiveDirectory:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSArray *entries; // @synthesize entries=_entries;
@property(readonly, nonatomic) NSData *contents; // @synthesize contents=_contents;
- (void).cxx_destruct;
- (_Bool)updateEntries:(id)arg1 error:(out id *)arg2;
- (_Bool)loadCanMiss:(_Bool)arg1 error:(out id *)arg2;
- (id)entryWithFileName:(id)arg1;
- (_Bool)unarchiveWithDirectoryURL:(id)arg1 error:(out id *)arg2;
@property(readonly, nonatomic) NSURL *URL;
- (id)initWithChannel:(id)arg1 options:(id)arg2 error:(out id *)arg3;
- (id)initWithData:(id)arg1 options:(id)arg2 error:(out id *)arg3;
- (id)initWithURL:(id)arg1 options:(id)arg2 error:(out id *)arg3;

@end
