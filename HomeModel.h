//
//  HomeModel.h
//  MyShop
//
//  Created by MacBook Air on 2018/5/16.
//  Copyright © 2018年 YH. All rights reserved.
//

#import <Foundation/Foundation.h>

@class HomeData,HomeNeardy,Banner,News,Consume,HotGoods,RecommendGoods,NearSeller,NearBusiness;
@interface HomeModel : NSObject
@property (nonatomic, strong) HomeData *homeData;
@property (nonatomic, strong) HomeNeardy *homeNeardy;
@end

@interface HomeData : NSObject
@property (nonatomic, strong) NSArray<Banner *> *banner;
@property (nonatomic, strong) NSArray<News *> *news;
@property (nonatomic, strong) NSArray<HotGoods *> *hotGoods;
@property (nonatomic, strong) NSArray<RecommendGoods *> *recommendGoods;
@property (nonatomic, strong) Consume *consume;
@end

@interface HomeNeardy : NSObject
@property (nonatomic, strong) NSArray<NearBusiness *> *nearBusiness;
@property (nonatomic, strong) NSArray<NearSeller *> *nearSeller;
@end

@interface Banner : NSObject
@property (nonatomic, copy) NSString *bannerId;
@property (nonatomic, copy) NSString *bannerImgSrc;
@property (nonatomic, copy) NSString *bannerUrl;
@end

@interface News : NSObject
@property (nonatomic, copy) NSString *newsId;
@property (nonatomic, copy) NSString *newsTitle;
@end

@interface Consume : NSObject
@property (nonatomic, copy) NSString *yesterdayMoney;
@property (nonatomic, copy) NSString *allMoney;
@property (nonatomic, copy) NSString *toDayMoney;
@property (nonatomic, copy) NSString *allPartake;
@property (nonatomic, copy) NSString *toPartake;
@end

@interface HotGoods : NSObject
@property (nonatomic, copy) NSString *goodsId;
@property (nonatomic, copy) NSString *goodsName;
@property (nonatomic, copy) NSString *goodsPrice;
@property (nonatomic, copy) NSString *goodsOldPrice;
@property (nonatomic, copy) NSString *goodsSellerNum;
@property (nonatomic, copy) NSString *goodsImg;
@end

@interface RecommendGoods : NSObject
@property (nonatomic, copy) NSString *goodsId;
@property (nonatomic, copy) NSString *goodsName;
@property (nonatomic, copy) NSString *goodsPrice;
@property (nonatomic, copy) NSString *goodsOldPrice;
@property (nonatomic, copy) NSString *goodsSellerNum;
@property (nonatomic, copy) NSString *goodsImg;
@end

@interface NearBusiness : NSObject
@property (nonatomic, copy) NSString *businessId;
@property (nonatomic, copy) NSString *businesImg;
@property (nonatomic, copy) NSString *businesName;
@property (nonatomic, copy) NSString *businesAddress;
@property (nonatomic, copy) NSString *businesScore;
@property (nonatomic, copy) NSString *businesEval;
@property (nonatomic, assign) float lati;
@property (nonatomic, assign) float longi;
@end

@interface NearSeller : NSObject
@property (nonatomic, copy) NSString *businessId;
@property (nonatomic, copy) NSString *businesImg;
@property (nonatomic, copy) NSString *businesName;
@property (nonatomic, copy) NSString *businesAddress;
@property (nonatomic, copy) NSString *businesScore;
@property (nonatomic, copy) NSString *businesEval;
@property (nonatomic, assign) float lati;
@property (nonatomic, assign) float longi;
@end

