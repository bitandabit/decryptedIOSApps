//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSString;

@interface SCSongInfoBuilder : NSObject
{
    NSString *_songTitle;
    NSString *_artistName;
    NSString *_artistImageURL;
    NSString *_highDefImageUrl;
    NSString *_songURL;
    NSDate *_recordDate;
    NSString *_genre;
    NSArray *_artists;
}

+ (id)withSongInfo:(id)arg1;
- (void).cxx_destruct;
- (id)setArtists:(id)arg1;
- (id)setGenre:(id)arg1;
- (id)setRecordDate:(id)arg1;
- (id)setSongURL:(id)arg1;
- (id)setHighDefImageUrl:(id)arg1;
- (id)setArtistImageURL:(id)arg1;
- (id)setArtistName:(id)arg1;
- (id)setSongTitle:(id)arg1;
- (id)build;

@end
