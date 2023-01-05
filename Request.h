#pragma once

const char* const dataRequestHeader =

"POST /api/michelangelo/timeseries/history?hash=xxxxxxxxx&ckey=xxxxxxx" // change the hash and ckey values to match the one you got on the browser
" "
"HTTP/1.1\r\n"
"Accept: application/json, text/javascript, */*; q=0.01\r\n"
"Accept-Encoding: identity\r\n" // maybe change from indentity to gzip because the response is 100kB
"Accept-Language: fr,fr-FR;q=0.9,de;q=0.8,en-US;q=0.7,en;q=0.6,ar;q=0.5,co;q=0.4,ht;q=0.3,zh-TW;q=0.2,zh;q=0.1,hy;q=0.1,be;q=0.1,fy;q=0.1,la;q=0.1,haw;q=0.1,ny;q=0.1,he;q=0.1,da;q=0.1,fi;q=0.1,ja;q=0.1,ur;q=0.1,tr;q=0.1,kk;q=0.1,uz;q=0.1,hr;q=0.1,it;q=0.1,el;q=0.1\r\n"
"Cache-Control: no-cache\r\n"
"Connection: close\r\n"
"Content-Length: xxx\r\n" // Pass the body through strlen to determine the size without the null char
"Content-Type: application/json; charset=UTF-8\r\n"
"Dylan2010.EntitlementToken: cecc4267a0194af89ca343805a3e57af\r\n"
"Host: api-secure.wsj.net\r\n"
"Origin: https://www.marketwatch.com\r\n"
"Referer: https://www.marketwatch.com/investing/stock/[insert here]/charts?mod=mw_quote_tab \r\n" // raplce the [insert here] with the stock you want to trade
"Sec-Fetch-Dest: empty\r\n"
"Sec-Fetch-Mode: cors\r\n"
"Sec-Fetch-Site: cross-site\r\n"
"User-Agent: Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/108.0.0.0 Safari/537.36\r\n"
"sec-ch-ua: \"Not?A_Brand\";v=\"8\", \"Chromium\";v=\"108\", \"Google Chrome\";v=\"108\"\r\n"
"sec-ch-ua-mobile: ?0\r\n"
"sec-ch-ua-platform: \"Windows\"\r\n"
"\r\n"
;

const char* const dataRequestBody = 
 
"{\"Step\":\"PT1M\",\"TimeFrame\":\"D1\",\"StartDate\":1670025600000,\"EndDate\":1670025600000,\"EntitlementToken\":\"cecc4267a0194af89ca343805a3e57af\",\"IncludeMockTick\":true,\"FilterNullSlots\":false,\"FilterClosedPoints\":true,\"IncludeClosedSlots\":false,\"IncludeOfficialClose\":true,\"InjectOpen\":false,\"ShowPreMarket\":true,\"ShowAfterHours\":false,\"UseExtendedTimeFrame\":true,\"WantPriorClose\":false,\"IncludeCurrentQuotes\":false,\"ResetTodaysAfterHoursPercentChange\":false,\"Series\":[{\"Key\":\"STOCK/US/XNYS/xxx\",\"Dialect\":\"Charting\",\"Kind\":\"Ticker\",\"SeriesId\":\"s1\",\"DataTypes\":[\"Last\"],\"Indicators\":[{\"Parameters\":[{\"Name\":\"ShowOpen\"},{\"Name\":\"ShowHigh\"},{\"Name\":\"ShowLow\"},{\"Name\":\"ShowPriorClose\",\"Value\":true},{\"Name\":\"Show52WeekHigh\"},{\"Name\":\"Show52WeekLow\"}],\"Kind\":\"OpenHighLowLines\",\"SeriesId\":\"i2\"},{\"Parameters\":[{\"Name\":\"Period\",\"Value\":\"50\"}],\"Kind\":\"SimpleMovingAverage\",\"SeriesId\":\"i3\"},{\"Parameters\":[],\"Kind\":\"Volume\",\"SeriesId\":\"i4\"},{\"Parameters\":[{\"Name\":\"EMA1\",\"Value\":12},{\"Name\":\"EMA2\",\"Value\":26},{\"Name\":\"SignalLine\",\"Value\":9}],\"Kind\":\"MovingAverageConvergenceDivergence\",\"SeriesId\":\"i5\"},{\"Parameters\":[{\"Name\":\"YearOverYear\"}],\"Kind\":\"EarningsEvents\",\"SeriesId\":\"i6\"},{\"Parameters\":[{\"Name\":\"Period\",\"Value\":14},{\"Name\":\"KSMAPeriod\",\"Value\":3},{\"Name\":\"DSMAPeriod\",\"Value\":3}],\"Kind\":\"StochasticOscillatorSlow\",\"SeriesId\":\"i7\"},{\"Parameters\":[{\"Name\":\"Period\",\"Value\":14},{\"Name\":\"DSMAPeriod\",\"Value\":3}],\"Kind\":\"StochasticOscillatorFast\",\"SeriesId\":\"i8\"}]}]}"
// replace the series key value with stock name           ------------------>>>>-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------^      
;

const char* const buyRequestHeader =
  
"POST [insert here]" // Copy the path. For me it looks like this : /v1/games/xxxx/ledgers/xxxx/trades
" "
"HTTP/1.1\r\n"
"Accept: */*\r\n"
"Accept-encoding: identity\r\n"
"Accept-Language: fr,fr-FR;q=0.9,de;q=0.8,en-US;q=0.7,en;q=0.6,ar;q=0.5,co;q=0.4,ht;q=0.3,zh-TW;q=0.2,zh;q=0.1,hy;q=0.1,be;q=0.1,fy;q=0.1,la;q=0.1,haw;q=0.1,ny;q=0.1,he;q=0.1,da;q=0.1,fi;q=0.1,ja;q=0.1,ur;q=0.1,tr;q=0.1,kk;q=0.1,uz;q=0.1,hr;q=0.1,it;q=0.1,el;q=0.1\r\n"
"Content-length: 121\r\n" // dependent on the length of the body
"Content-Type: application/json; charset=UTF-8\r\n"
"Cache-Control: no-cache\r\n"
"Connection: close\r\n"
"Cookie: [insert here]\r\n" // replace the [insert here] with the cookies that the browser sends when it buys a stock
"Host: vse-api.marketwatch.com\r\n"
"Origin: https://www.marketwatch.com\r\n"
"Referer: https://www.marketwatch.com/games/[insert here]/portfolio \r\n" // replace the insert here with your game's name
"Sec-ch-ua: \"Not?A_Brand\";v=\"8\", \"Chromium\";v=\"108\", \"Google Chrome\";v=\"108\"\r\n"
"Sec-ch-ua-mobile: ?0\r\n"
"Sec-ch-ua-platform: \"Windows\"\r\n"
"Sec-fetch-dest: empty\r\n"
"Sec-fetch-site: same-site\r\n"
"User-Agent: Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/108.0.0.0 Safari/537.36\r\n"
"\r\n"
;

const char* const buyRequestBody =
  
"{ \"djid\":\"xx-yyyyyy\",\"ledgerId\":\"xxxxxxxxxxxx\",\"tradeType\":\"xxx\",\"shares\":xx,\"expiresEndOfDay\":false,\"orderType\":\"Market\"}"
;
// replace the djid value with the one of the stock that you want to trade ex: 13-403291 for GME
// replace the ledgerId value with yours
// replace the tradeType with Buy, Sell, Short or Cover
// replace the shares value with the number of shares you want to buy
